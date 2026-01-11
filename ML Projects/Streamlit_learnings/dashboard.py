import streamlit as st


st.title("Pant Caffe")
col1,col2=st.columns(2)

with col1:
    st.header("Masala Chai")
    vote1=st.button("Voting For Masala Chai")
    st.image("https://bing.com/th?id=OSK.02a85668cce90697c46cb72941796410",width=300)



with col2:
     
     st.header("Adrak Chai")
     vote2=st.button("Voting For Adrak Chai")
     st.image("https://tse3.mm.bing.net/th/id/OIP.rClyfJtnvB01iLEX7onLTwHaID?rs=1&pid=ImgDetMain&o=7&rm=3",width=300)


if vote1:
     st.success(f"Thanks for voting  Masala Chai")


elif vote2:
     st.success(f"Thanks for Adrak Chai")


name=st.sidebar.text_input("Enter your name")
tea=st.sidebar.selectbox("choose your Chai", ["Masala ","Kesar","Adrak"])

st.write(f"Welcome {name} and your {tea} chai is getting ready")



with st.expander("Show chai Making Instruction"):
     st.write("""
      1.Boil water with tea leaves
      2.Add milk and spices
      3.Serve hot
      
      
      """)
     
     st.markdown('### Welcome to chai app')
       
     st.markdown('>blockqute')