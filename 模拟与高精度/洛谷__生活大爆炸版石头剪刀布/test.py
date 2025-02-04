def calculate_score(n, na, nb, a_seq, b_seq):
    # 首先定义了一个输赢规则的字典 win_rules
    win_rules = {
        0: [2,3],
        1: [0,3],
        2: [1,4],
        3: [2,4],
        4: [0,1]
    }
    # 初始化 A 和 B 的分数为 0
    a_score = 0
    b_score = 0
    # 初始化 A 序列和 B 序列的索引
    i_a = 0
    i_b = 0

    # 开始一个循环，循环次数为 n 次
    for _ in range(n):
        # 取出当前 A 序列和 B 序列对应的动作
        a_move = a_seq[i_a]
        b_move = b_seq[i_b]

        # 如果 A 和 B 的动作相同，即为平局，什么都不做，直接跳过
        if a_move == b_move:
            pass

        # 如果 B 的动作在 A 动作对应的获胜动作列表中，说明 A 赢，A 的分数加 1
        elif b_move in win_rules[a_move]:
            a_score += 1

        # 否则，说明 B 赢，B 的分数加 1
        else:
            b_score += 1

        # A 序列的索引循环更新，通过取模运算确保不会越界
        i_a = (i_a + 1) % na
        # B 序列的索引循环更新，通过取模运算确保不会越界
        i_b = (i_b + 1) % nb

    # 最后返回 A 和 B 的分数
    return a_score, b_score

# 从输入获取 n、na、nb 的值
n, na, nb = map(int, input().split())
# 从输入获取 A 序列的值，并转换为列表
a_seq = list(map(int, input().split()))
# 从输入获取 B 序列的值，并转换为列表
b_seq = list(map(int, input().split()))

# 调用 calculate_score 函数计算分数并输出
a_score, b_score = calculate_score(n, na, nb, a_seq, b_seq)
print(a_score, b_score)


