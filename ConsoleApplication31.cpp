#include <iostream>
#include <string>

class Person {
protected:
    std::string uniqueId;
    std::string firstName;
    std::string lastName;
    std::string passportNumber;
    std::string birthDate;
    std::string additionalInfo;

public:
    Person(const std::string& id, const std::string& fName, const std::string& lName,
        const std::string& passport, const std::string& bDate, const std::string& info)
        : uniqueId(id), firstName(fName), lastName(lName), passportNumber(passport),
        birthDate(bDate), additionalInfo(info) {}

    std::string getUniqueId() const { return uniqueId; }
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getPassportNumber() const { return passportNumber; }
    std::string getBirthDate() const { return birthDate; }
    std::string getAdditionalInfo() const { return additionalInfo; }

    void setUniqueId(const std::string& id) { uniqueId = id; }
    void setFirstName(const std::string& fName) { firstName = fName; }
    void setLastName(const std::string& lName) { lastName = lName; }
    void setPassportNumber(const std::string& passport) { passportNumber = passport; }
    void setBirthDate(const std::string& bDate) { birthDate = bDate; }
    void setAdditionalInfo(const std::string& info) { additionalInfo = info; }
};

class Student : public Person {
private:
    std::string educationalInstitution;
    std::string specialization;
    std::string group;

public:
    Student(const std::string& id, const std::string& fName, const std::string& lName,
        const std::string& passport, const std::string& bDate, const std::string& info,
        const std::string& eduInst, const std::string& spec, const std::string& grp)
        : Person(id, fName, lName, passport, bDate, info),
        educationalInstitution(eduInst), specialization(spec), group(grp) {}

    std::string getEducationalInstitution() const { return educationalInstitution; }
    std::string getSpecialization() const { return specialization; }
    std::string getGroup() const { return group; }

    void setEducationalInstitution(const std::string& eduInst) { educationalInstitution = eduInst; }
    void setSpecialization(const std::string& spec) { specialization = spec; }
    void setGroup(const std::string& grp) { group = grp; }
};

int main() {
    Student student1("12345", "John", "Doe", "AB1234567", "1995-06-15", "Additional Info",
        "University of XYZ", "Computer Science", "CS101");

    Student student2("54321", "Jane", "Smith", "CD9876543", "1996-03-25", "Additional Info",
        "University of ABC", "Engineering", "EN102");

    std::cout << "Student 1 Information:\n";
    std::cout << "ID: " << student1.getUniqueId() << "\n";
    std::cout << "Name: " << student1.getFirstName() << " " << student1.getLastName() << "\n";
    std::cout << "Passport: " << student1.getPassportNumber() << "\n";
    std::cout << "Birth Date: " << student1.getBirthDate() << "\n";
    std::cout << "Additional Info: " << student1.getAdditionalInfo() << "\n";
    std::cout << "Educational Institution: " << student1.getEducationalInstitution() << "\n";
    std::cout << "Specialization: " << student1.getSpecialization() << "\n";
    std::cout << "Group: " << student1.getGroup() << "\n";

    std::cout << "\nStudent 2 Information:\n";
    std::cout << "ID: " << student2.getUniqueId() << "\n";
    std::cout << "Name: " << student2.getFirstName() << " " << student2.getLastName() << "\n";
    std::cout << "Passport: " << student2.getPassportNumber() << "\n";
    std::cout << "Birth Date: " << student2.getBirthDate() << "\n";
    std::cout << "Additional Info: " << student2.getAdditionalInfo() << "\n";
    std::cout << "Educational Institution: " << student2.getEducationalInstitution() << "\n";
    std::cout << "Specialization: " << student2.getSpecialization() << "\n";
    std::cout << "Group: " << student2.getGroup() << "\n";

    return 0;
}

