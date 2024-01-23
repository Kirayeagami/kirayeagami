name={}
n=int(input('how many data you want to Enter ?:'))
for i in range(1,n):
    print(f'entry no.{i}')
    key=input('enter your key :')
    value=input('enter your value :')
    name[key]=value
for i,j in name.items():
    print(f'{i}--->>{j}')    