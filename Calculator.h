#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
public:
    Calculator();
    virtual ~Calculator() = default;
    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();
    void setMem();
    void printMem() const;

    double parseInput(const std::string&) const;

    virtual void welcome() const;

    virtual void parseOperation(const std::string&);

protected:
    double result;      /// data member to store result
    double mem;         /// data member to store mem
};

#endif // CALCULATOR_H
