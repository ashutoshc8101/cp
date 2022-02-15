# #include <iostream>

n = int(input())

moves = 0
prev = None
curr = None

ll = input()

for i in range(0, n):
  if prev == None:
    prev = int(ll.split(' ')[i])

  curr = int(ll.split(' ')[i])

  if curr < prev:
    moves += (prev - curr)
    curr = prev

  prev = curr

print(moves)
