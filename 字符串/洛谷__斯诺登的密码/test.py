import itertools     # itertools是Python内置的一个用于创建高效迭代器的工具模块。使用此语句能更方便地进行迭代操作和处理数据

def get_password(words_sentence):
    num_words = {
        'zero' : 0,'one' : 1,'two':2,'three' : 3,'four' : 4,'five' : 5,
        'six' : 6,'seven' : 7,'eight' : 8,'nine' : 9,'ten' : 10,
        'eleven' : 11,'twelve' : 12,'thirteen' : 13,'fourteen':14,
        'fifteen':15,'sixteen':16,'seventeen':17,'eighteen':18,
        'nineteen':19,'twenty':20,'a': 1,'both': 2,'another': 2,
        'first': 1,'second': 2,'third': 3
    }
    words = words_sentence.lower().split()
    numbers = []
    for word in words:
        if word in num_words:
            numbers.append(num_words[word])
    sqrt_mods = []
    for num in numbers:
        mod_result = (num**2)%100
        sqrt_mods.append(f"{mod_result:02}")
    if not sqrt_mods:
        return 0
    permutations = list(itertools.permutations(sqrt_mods))    # 使用了 itertools.permutations函数生成了sqrt_mods的所有排列，并将结果转换为列表赋值给permutation
    min_num = float("inf")     # 初始化min_num为无穷大
    for permutation in permutations:
        num_str = ''.join(permutation)    # 通过循环遍历，对于每个排列，''.join(permutation)将可迭代对象permutation中的元素按照分隔符''（空格）连接成一个字符串（中间不包含分隔符''）
        num = int(num_str)
        if num < min_num:
            min_num = num
    return min_num

words_sentence = input()
password = get_password(words_sentence)
print(password)






