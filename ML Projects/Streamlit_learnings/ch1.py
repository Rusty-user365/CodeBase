print('hello')

import streamlit as st

st.title("hello chai App")
st.subheader("Brewed with streamlit")
st.text("Welcome to your first interactive app")
st.write("Choose your fav. variety chai")
chai=st.selectbox("your favorite chai :" , ["masala chai","Lemon chai","Green Tea"])
st.write(f" your choice {chai},excellent")
st.success("Your chai has been brewed")
