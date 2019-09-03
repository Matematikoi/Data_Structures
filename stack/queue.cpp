#include <iostream>
#include <bits/stdc++.h>

using namespace std;


template <class T>
class Fifo{
    int principio=0;
    int fin =0;
    int tamanno = 0;
    int size;
    T* arr;

    public:
    Fifo(){
        size = 4;
        tamanno = size;
        arr = new T [size];
    }
    bool isFull(){
        return tamanno==size-1;
    }
    void push (T number){
        if (isFull()){
            throw runtime_error("The queue is full and there is no more space.");
        }
        arr[fin]=number;
        fin = (fin+1)%size;
        tamanno++;
    }
    bool isEmpty(){
        return tamanno ==0;
    }
    T last(){
        if (isEmpty()){
            throw runtime_error("The queue is empty and there is no last element.");
        }
        return arr[principio];
    }
    void pop(){
        if (isEmpty()){
            return;
        }
        principio = (principio+1)%size;
        tamanno--;
    }
};


int main (){
    Fifo<int> st;
    st.push(1);
    cout<<st.last()<<endl;
    st.push(2);
    st.pop();
    cout<<st.last()<<endl;
    st.push(3);
    st.push(4);
    st.pop();
    cout<<st.last()<<endl;
    st.push(5);
    st.pop();
    cout<<st.last()<<endl;
    st.pop();
    
    cout<<st.last()<<endl;
}
