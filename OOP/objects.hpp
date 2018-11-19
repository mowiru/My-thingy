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

class Employee : public Person {
  public:
    float wage;

    void print();

    Employee();
    Employee(const char* name, const char* lastName, int age, int wage);
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
