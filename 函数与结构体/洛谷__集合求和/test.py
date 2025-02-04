
def subset_sum(My_list_num):
    total =0
    n = len(My_list_num)
    for i in range(2**n):
        subset = []
        for j in range(n):      # 检查每个元素是否在当前子集中
            if(i & (1 << j)) >0:
                subset.append(My_list_num[j])
        total += sum(subset)
    return total


s = input()
My_list = s.split(" ")
My_list_num = []
for i in My_list:
    My_list_num.append(int(i))
print(subset_sum(My_list_num))


