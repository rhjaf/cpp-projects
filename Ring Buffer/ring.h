#ifndef RING_H
#define RING_H


template <typename T>
class ring
{
private:
    /* data */
    int m_pos;
    int m_size;
    T *m_values;
public:
    ring(int size):m_pos(0),m_size(size),m_values(nullptr){
        m_values = new T[m_size];
    };
    class iterator; // should be public
    
    int size(){
        return m_size;
    }

    void add(T value){
        m_values[m_pos++] = value;
        if(m_pos==m_size){
            m_pos = 0;
        }
    }

    T &get(int pos){
        return m_values[pos];
    } 

    ~ring(){
        delete[] m_values;
    };
};

template <typename T>
class ring<T>::iterator{
        public:
        /*
        void print(){
            cout << "Hello from" << T()<<endl;
        }
        */
};


#endif  