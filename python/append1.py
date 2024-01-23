a=[]
def main(a,b):
    x=0
    y=0
    p=[]
    for i in range(a,b-1):
        if (i%2==0):
            x=i
        else:
            y=i
        if x>y:
            p.append(x-y)
        else:
            p.append(y-x)        

        print(p)
main(1,101)