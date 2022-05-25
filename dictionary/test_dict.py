d={}
x=int(input())
for i in range(x):
    y=int(input())
    d[y]={}
    k=int(input())
    v=int(input())
    d[y].update({k:v})
    print(d)
for i in d.key():
    for j in d[i].key():
        print(d([i][j]))    