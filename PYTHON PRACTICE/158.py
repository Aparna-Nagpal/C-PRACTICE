"""
Use List Comprehension to create a list of the first letters of every word in the string below:
st = 'Create a list of the first letters of every word in this string'
"""
st = 'Create a list of the first letters of every word in this string'
l=[i[0] for i in st.split()]
print(l)
