"""
Use for, .split(), and if to create a Statement that will print out words that start with 's':
st = 'Print only the words that start with s in this sentence'
"""
st='Print only the words that start with s in this sentence'
st=st.split()
for i in st:
    if(i[0]=='s'):
        print(i)
