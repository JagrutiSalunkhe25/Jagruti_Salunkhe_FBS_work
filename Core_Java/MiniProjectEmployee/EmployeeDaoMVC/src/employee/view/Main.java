package employee.view;

import java.util.ArrayList;
import java.util.Scanner;
import employee.dao.EmployeeDAO;
import employee.model.Admin;
import employee.model.Employee;
import employee.model.HR;
import employee.model.SalesManager;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        EmployeeDAO dao = new EmployeeDAO();
        int choice;

        do {
            System.out.println("\n===== Employee Management System =====");
            System.out.println("1. Add Employee");
            System.out.println("2. Search Employee");
            System.out.println("3. Update Employee");
            System.out.println("4. Delete Employee");
            System.out.println("5. Display All Employees");
            System.out.println("6. Sort Employees");
            System.out.println("0. Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {

               
                case 1:
                    System.out.println("Select Employee Type (1-HR, 2-Admin, 3-SalesManager): ");
                    int type = sc.nextInt();

                    System.out.print("Enter ID: ");
                    int id = sc.nextInt();
                    sc.nextLine(); 
                    System.out.print("Enter Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter Base Salary: ");
                    double salary = sc.nextDouble();

                    switch (type) {
                        case 1:
                            System.out.print("Enter Commission: ");
                            double comm = sc.nextDouble();
                            dao.addEmployee(new HR(id, name, salary, comm));
                            break;
                        case 2:
                            System.out.print("Enter Allowance: ");
                            double allowance = sc.nextDouble();
                            dao.addEmployee(new Admin(id, name, salary, allowance));
                            break;
                        case 3:
                            System.out.print("Enter Target: ");
                            int target = sc.nextInt();
                            System.out.print("Enter Incentive per Target: ");
                            double incentive = sc.nextDouble();
                            dao.addEmployee(new SalesManager(id, name, salary, target, incentive));
                            break;
                        default:
                            System.out.println("Invalid type!");
                    }
                    break;

              
                case 2:
                    System.out.println("\nSearch By:");
                    System.out.println("1. ID");
                    System.out.println("2. Name");
                    
                    int sChoice = sc.nextInt();
                    sc.nextLine();
                    switch (sChoice) {
                        case 1:
                        	int count=0;
                        	do {
                        		count++;
                            System.out.print("Enter ID: ");
                            id = sc.nextInt();
                            Employee e=dao.searchEmployeeById(id);
                            if(e!=null)
                            	System.out.println(e); 
                            else
                            	System.out.println("id not present");
                        	}while(count<3);
                            break;
                        case 2:
                        	int count1=0;
                        	do {
                        		count1++;
                            System.out.print("Enter Name: ");
                            name = sc.nextLine();
                            Employee e1=dao.searchEmployeeByName(name);
                            if(e1!=null)
                            	System.out.println(e1); 
                            else
                            	System.out.println("name not present");
                        	}while(count1<3);
                            break;
                       
                        default:
                            System.out.println("Invalid  option!");
                    }
                    break;

               
                case 3:
                    System.out.println("\nUpdate Options:");
                    System.out.println("1. Name");
                    System.out.println("2. ID");
                    System.out.println("3. Salary");
                    int uChoice = sc.nextInt();
                    sc.nextLine();
                    switch (uChoice) {
                        case 1:
                            System.out.print("Enter Employee ID: ");
                            id = sc.nextInt();
                            sc.nextLine();
                            System.out.print("Enter New Name: ");
                            name = sc.nextLine();
                            dao.updateName(id, name);
                            break;
                        case 2:
                            System.out.print("Enter Old ID: ");
                            int oldId = sc.nextInt();
                            System.out.print("Enter New ID: ");
                            int newId = sc.nextInt();
                            dao.updateId(oldId, newId);
                            break;
                        case 3:
                            System.out.print("Enter Employee ID: ");
                            id = sc.nextInt();
                            System.out.print("Enter New Salary: ");
                            salary = sc.nextDouble();
                            dao.updateSalary(id, salary);
                            break;
                        default:
                            System.out.println("Invalid update option!");
                    }
                    break;

              
                case 4:
                    System.out.println("\nDelete Options:");
                    System.out.println("1. By ID");
                    System.out.println("2. By Name");
                    int dChoice = sc.nextInt();
                    sc.nextLine();
                    switch (dChoice) {
                        case 1:
                            System.out.print("Enter ID: ");
                            id = sc.nextInt();
                            dao.removeEmployeeById(id);
                            break;
                        case 2:
                            System.out.print("Enter Name: ");
                            name = sc.nextLine();
                            dao.removeEmployeeByName(name);
                            break;
                        default:
                            System.out.println("Invalid delete option!");
                    }
                    break;

                
                case 5:
                    dao.displayAll();
                    break;

               
                case 6:
                    System.out.println("\nSort By:");
                    System.out.println("1. ID");
                    System.out.println("2. Name");
                    System.out.println("3. Salary");
                    int sortChoice = sc.nextInt();
                    switch (sortChoice) {
                        case 1:
                            dao.sortById();
                            break;
                        case 2:
                            dao.sortByName();
                            break;
                        case 3:
                            dao.sortBySalary();
                            break;
                        default:
                            System.out.println("Invalid sort option!");
                    }
                    break;

                
                case 0:
                    System.out.println("Exiting... Goodbye!");
                    break;

                default:
                    System.out.println("Invalid choice! Try again.");
            }

        } while (choice != 0);

        
    }
}
