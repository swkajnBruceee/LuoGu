n = int(input())
max_vote = 0
winner_index = 0
for i in range(n):
    vote = int(input())
    if vote > max_vote:
        max_vote = vote
        winner_index = i + 1
print(winner_index)
print(max_vote)



