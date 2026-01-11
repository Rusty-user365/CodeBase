import streamlit as st

st.title("Programming Language")
st.subheader("Coding with passion")
st.text("Welcome to your First Streamlit Session")
st.write("Choose your language  :")
language=st.selectbox("your favorite  language :", ["Cpp", "Python", "Java"])
st.write(f"Your code is in {language} language , Thank you!")
st.success("Code Executed")