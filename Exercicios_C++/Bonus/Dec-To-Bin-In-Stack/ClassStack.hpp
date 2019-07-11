#ifndef CLASSSTACK_HPP_INCLUDED
#define CLASSSTACK_HPP_INCLUDED

class Stack {
  private:
    int *mem;
    int top = -1;
    int capacity;

  public:
    Stack();
    Stack(int);
    ~Stack();
    void push(int);
    bool isFull();
    int pop();
    bool isEmpty();
    int remove();
};

#endif
