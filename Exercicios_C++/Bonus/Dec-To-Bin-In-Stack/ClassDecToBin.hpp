#ifndef CLASSDECTOBIN_HPP_INCLUDED
#define CLASSDECTOBIN_HPP_INCLUDED
#define BINARY 2

class DecToBin {
  private:
    int Decimal;
    int Binary;
    int Quotient;
    int Rest;
  
  public:
    void setBinary(int dec);
    void displayBinary();
}; 

#endif