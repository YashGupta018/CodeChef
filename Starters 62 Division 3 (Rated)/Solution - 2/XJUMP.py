# cook your dish here
for i in range (int (input())):
    j, k = map (int, input().split())
    print( (j // k) + (j % k) )