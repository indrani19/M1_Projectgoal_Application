
## 1 REQUIREMENTS

### 1.1 INTRODUCTION:

The project Restaurant Billing System gives us the facility to manage the Restaurants billing system.
This application is helpful for staff or admin for billing of food order and managing customers details. 
This application is access by only staff and admin. Members can't access it directly.
The project is very useful for those who want to know about Restaurants Billing System.
We can enter the details of new food items and retrieve the details of food items. We can generate the bills for the customers.
In this project we can maintain the GST calculation of every food item.

### 1.2 FEATURES:

- The system is fast, user friendly and interactive.

- Easy way to enter new costumers.

- Automatic GST calculation

- All necessary requirements for the Restaurants Billing System has presented in this project.

###  1.3 SWOT Analysis:
![swot](https://user-images.githubusercontent.com/98951784/153701177-04fae38f-80c9-4b5b-9c64-283a7b67eda5.png)



### 1.4 4W's and 1H



### WHO

- Any one who runs restaurants can use this application.



### WHAT

- This application manages Food items and customer data.



### WHY

- For easy and accurate billing.



### HOW

- Implemented using structures, files, pointers and other functionalities of C.



### 1.5 Detail requirements


###  1.5.1 High Level Requirements:

| ID | Description | Status (Implemented/Future)|
|:---:|:---:|:---:|
|HLR-1| system shall be able to generate the invoice |Implemented|
|HLR-2| System shall calculate the total bill including GST according to the orders  |Implemented|
|HLR-3| system shall save the invoices |Implemented|
|HLR-4| system shall show the saved previous invoices|Implemented|


### 1.5.2 Low level Requirements:

| ID | Description | Status (Implemented/Future)|
|:---:|:---:|:---:|
|LLR-1|User shall be able to read the output data|Implemented| 

## 2 ARCHITECTURE

### 2.1 Behavioural Diagram

### 2.1.1  High Level Flow chart Behavioural Diagram:
![fl1](https://user-images.githubusercontent.com/98951784/156756143-b2641f92-d395-466e-a3af-593dd303f24e.png)

### 2.1.2 Low Level Flow chart Behavioural Diagram:
![flo2](https://user-images.githubusercontent.com/98951784/156760867-843a680b-5820-48c4-a974-0c4d7981475e.png)

### 2.2 Structural Diagram

### 2.2.1 UML Use Case Structural Diagram:
![uml](https://user-images.githubusercontent.com/98951784/156767174-284072ce-6ded-4272-b43e-54c71e67a984.png)

### 2.2.2 System Functional Diagram
![bd2](https://user-images.githubusercontent.com/98951784/156641767-230f5edc-0dc9-4bcd-b5d3-813d198df411.png)




## 3 IMPLEMENTATION
### 3.1 Folder Structure
|Folder|	Description|
|------|-------------|
|documentation|	Files related to Doxygen documentation|
|inc|	Includes header files|
|src|	Source code file for calendar application|
|test|	All source code and data for testing purposes|
|unity|	Files for unit testing|


## 4 TEST PLAN AND OUTPUT:

### 4.1 Table no 1: High level test plan

| **Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|:---:|:---:|:---:|:---:|:---:|:---:|
|  H_01       | Generate Invoice | Option 1|Enter the name of customer | Enter the name of customer  |Requirement based |
|  H_02      | Calculates SGST and CGST | 738| 870 | 870 |Requirement based |
|  H_03      |Save Invoice | [y/n]|saved the Invoice | saved the Invoice  |Requirement based |
|  H_04      |show Invoice | Option 3|Your previous Invoices |Your previous Invoices |Requirement based |

## 5 IMAGES 

### 5.1 Execution Images from Visual studio code

### - From the options the user has selected to Generate the Invoice and the user enters the inputs
![im1](https://user-images.githubusercontent.com/98951784/156648226-42f17c0e-ba76-424b-a324-b6da718b9ca6.png)

### -  Bill is Generated
![im2](https://user-images.githubusercontent.com/98951784/156648233-37da1f66-855f-4858-a505-09997577e913.png)

### -  Generated Bill is saved

![im3](https://user-images.githubusercontent.com/98951784/156648237-1d4a420b-2a32-4299-a328-e3302d258d38.png)

### -  Previous Invoices are Displayed

![im4](https://user-images.githubusercontent.com/98951784/156648241-d2d9a312-6272-41ac-9c95-0e87f8c8136d.png)
