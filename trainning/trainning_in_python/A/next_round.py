n , k = map(int, input().split())

scores = list(map(int, input().split()))

next_round = 0
k_score = scores[k - 1]
for score in scores:
   if score >= k_score and score > 0:
    next_round += 1 
print(next_round)