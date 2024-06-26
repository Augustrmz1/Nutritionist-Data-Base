# Client Database System for Nutritionist

# Nutritional Clinic - Database

This C++ program is a database for a nutritional clinic that manages the information of 20 patients. To access the database, users must have an employee account. The database allows viewing previously conducted consultations and provides general information about the patients such as name, sex, age, height in cm, and weight.

## Program Structure

The program is composed of an abstract superclass `Patient` and four subclasses that categorize the patients into:

1. **Athletes**
2. **Children**
3. **Oncological**
4. **Overweight Patients**

### Features

- **Login:**
  - Employees must log in to access the database.

- **Interactive Menu:**
  - Once logged in, the user can choose which sub-database to consult (Athletes, Children, Oncological, or Overweight Patients).

- **Specific Queries:**
  - Upon selecting a sub-database, a list of 5 registered patients is displayed with specific information depending on the type of patient:
    - **Athletes:** Practiced sport and calorie count adjustment.
    - **Children:** Tutor's name and development stage.
    - **Oncological:** Type of cancer, cancer stage, current treatment, and evaluator of possible future complications.
    - **Overweight Patients:** Calorie calculation, BMI calculation, and weight loss goal definition.

## Classes and Structures

### Abstract Class `Patient`
Defines properties and methods common to all patients:
- `name`
- `sex`
- `age`
- `height`
- `weight`
- Virtual methods to be implemented in subclasses.

### Subclasses
#### Athletes
- Practiced sport
- Calorie count adjustment

#### Children
- Tutor's name
- Development stage

#### Oncological
- Type of cancer
- Cancer stage
- Current treatment
- Evaluator of possible complications

#### Overweight Patients
- Calorie calculation
- BMI calculation
- Weight loss goal

## Program Usage

1. **Log In:**
   - Enter your employee credentials to access the system.

2. **Select Sub-Database:**
   - Choose between Athletes, Children, Oncological, or Overweight Patients.

3. **Consult Information:**
   - Review the list of patients and their specific information.


## System Requirements

- **Programming Language:** C++
- **Libraries and Dependencies:** string and cmath

## Why This Project Is Interesting

**Addressing a Real-World Need:**
In the field of nutrition and healthcare, there is a critical need for efficient data management systems. Many nutritionists still rely on manual or outdated methods for keeping track of patient information, which can be time-consuming and error-prone. This project addresses this gap by offering a modern, digital solution that streamlines the process, reducing errors and saving valuable time.

**Technical Challenge:**
Creating a comprehensive client database system involves several interesting technical challenges. These include designing robust data structures, ensuring data security and integrity, and developing a user-friendly interface. Tackling these challenges will not only enhance your skills as a developer but also result in a highly functional and valuable product.

**Scalability and Flexibility:**
Designing a system that can scale with a growing number of patients and adapt to different types of data is a compelling challenge. Ensuring that the database can handle increasing amounts of data without sacrificing performance or usability is critical. This project allows you to explore solutions for scalability and flexibility, essential skills in the tech industry.

**User-Centric Design:**
Creating a system that is intuitive and easy to use is crucial, especially in a professional setting where users may not have extensive technical expertise. By focusing on user experience (UX) design, the project can develop a product that meets the practical needs of nutritionists, making their workflow more efficient and less stressful. This emphasis on UX can differentiate this project from other technical solutions.

**Potential for Expansion:**
The initial scope of the project includes basic patient data management, but there is significant potential for future expansion.

**Positive Social Impact:**
By providing a tool that helps nutritionists offer better care, this project has the potential to positively impact the broader community. Improved health tracking and management can lead to better overall health outcomes, contributing to the well-being of individuals and communities. This social impact adds an extra layer of significance to the project.
![image](https://github.com/Augustrmz1/Nutritionist-Data-Base/assets/170146597/6fb270ae-3a27-4540-b02d-690032ec7600)


