age = int(input('enter your age:'))
wait=18-age
if age<=0:
    print('Invaild age')
elif age>=18:
    print('you are elegible for vote')
else:
    print(f'sorry! you are not elegible for vote.\nyou have to wait for {wait}years\ngo do your homework')