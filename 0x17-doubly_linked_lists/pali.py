#!/usr/bin/python3
d = []
f = [[1, 2, 3, 4, 5, 6],[1, 2, 3, 4, 5, 6]]
rev_list = []
fst_list = []
rev = 0;

for i in range(100, 1000):
    for j in range(100, 999):
        d.append( i * j)
#for m in d:
 #   while m > 0:
  #      rev_list.append(m % 10)
   #     m /= 10;
    #fst_list = rev_list.reverse()

print("{}".format(d))
