class Person {
  private:
    int id;

  public:
    int age;
    const char* name;
    const char* lastName;

    Person();
    Person(const char* name, const char* lastName, int age);

    virtual void print();
};

class Employee : public Person{

  public:
    float wage;

    virtual void print();

    Employee();
    Employee(const char* name, const char* lastName, int age, int wage);
};

class Chef : public Employee{

  public:

    const char* state;

    void print();

    Chef();
    Chef(const char* name, const char* lastName, int age, int wage, const char* state);

};

class animal {
  private:
    int id;

  public:
    const char* kind;
    const char* color;
    const char* call;

    animal();
    animal(const char* name, const char* color, const char* call);

    void print();
};
