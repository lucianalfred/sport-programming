n = int(input())

child_skills = list(map(int, input().strip().split()))

math = []
programming = []
sport = []


for i in range(n):
   if (child_skills[i] == 1):
       programming.append(i + 1)
   elif (child_skills[i] == 2):
       math.append(i + 1)
   elif (child_skills[i] == 3):
       sport.append(i + 1)

num_teams = min(len(math), len(programming), len(sport))
print(num_teams)
for i in range(num_teams):
    print(programming[i], math[i], sport[i])
