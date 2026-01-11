import streamlit as st
from datetime import date,datetime, timedelta
st.title("Chai maker App")
if st.button("Make Chai"):
    st.success("Chai is Ready")

add_masala =st.checkbox("Add Masala")
if add_masala:
    st.write("Masala added")
tea_type=st.radio("Pick your chai base: ", ["milk",'water', 'honey'])
selected_base=st.write(f"selected base :{tea_type}")

flavour=st.selectbox('choose flavour',["adrak",'lasun', 'lemon','honey'])
st.write(f"select falvour  :{flavour}")
sugar=st.slider("sugar levels",0,5,100)# 0 to 5 , 100 being default value
st.write(sugar)

cups=st.number_input("How many cups", min_value=1,max_value=3,step=2)

name=st.text_input("Enter your name ")

if name:
    st.write(f"Welcome {name} ! YO")




dob=st.date_input("Select your date of birth")
st.write(f"your Birth day {dob}")
today=date.today()
if dob:
    if dob==today:
        st.write(" Happy Birthday !")
    else:
        
        st.write(f" waiting {dob-today} days for birthday")




