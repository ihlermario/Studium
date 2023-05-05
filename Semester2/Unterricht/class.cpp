#include <iostream>
#include <stdint.h>

class Student
{
    public:
    int16_t num_of_exams = 0;
    int32_t id_number;
    std::string name;
    Student(std::string par_name, int32_t par_id, int16_t par_num_of_exames);
    void print() const;
    void update_bank_account(int64_t par_bank_account);
    
    private:
    int32_t bank_account_;
};

Student::Student(std::string par_name, int32_t par_id, int16_t par_num_of_exams)
{
    name = par_name;
    id_number = par_id;
    num_of_exams = par_num_of_exams;
}

void Student::update_bank_account(int64_t par_bank_account)
{
    bank_account_ = par_bank_account;
}

void Student::print() const
{
    std::cout << "Name:" << Student::name << std::endl;
    std::cout << "ID:" << Student::id_number << std::endl;
    std::cout << "Anzal Prüfungen:" << Student::num_of_exams << std::endl;
    std::cout << "Kontonummer:" << Student::bank_account_ << std::endl;
}


auto main() -> int
{
    Student Student(std::string("Mario Ihler"), 846548764, 4);
    Student.update_bank_account(85112);
    Student.print();
}
