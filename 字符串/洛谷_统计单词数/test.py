word = input().lower()
article = input().lower()
words_in_article = article.split()
count = words_in_article.count(word)
if count > 0:
    first_index = words_in_article.index(word)
    print(count,first_index)
else:
    print(-1)
