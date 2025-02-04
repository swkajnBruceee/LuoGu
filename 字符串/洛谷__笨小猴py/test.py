# 判断是否为质数
def is_Prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i*i <=n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6

    return True

# 检查是否为Lucky Word
def check_LuckyWord(word):
    count = {}    # 创建一个字典
    for char in word:
        if char in count:        # 如果count字典中有char，那么给char对应的value加1
            count[char] += 1
        else:
            count[char] = 1      # 如果count字典中没有char，那么创建一个key，并给其value赋值为1
    Max = max(count.values())
    Min = min(count.values())
    if is_Prime(Max - Min):
        print("Lucky Word")
        print(Max - Min)
    else:
        print("No Answer")
        print(0)

word = input()
check_LuckyWord(word)