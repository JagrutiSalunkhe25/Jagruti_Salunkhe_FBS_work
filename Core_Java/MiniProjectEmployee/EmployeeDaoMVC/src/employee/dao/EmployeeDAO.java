package employee.dao;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;

import employee.model.Admin;
import employee.model.Employee;
import employee.model.HR;
import employee.model.SalesManager;

public class EmployeeDAO {
//     static Employee[] empArr;
	public static ArrayList<Employee> empArr=new ArrayList<Employee>();
     
    static {
       
        empArr.add( new HR(101, "Jagruti", 50000, 5000));
        empArr.add( new HR(102, "ketan", 48000, 4500));
        empArr.add( new HR(103, "kejal", 47000, 4000));
        empArr.add( new SalesManager(201, "harish", 60000, 12, 8000));
        empArr.add( new SalesManager(202, "urvashi", 58000, 15, 7500));
        empArr.add( new SalesManager(203, "bhavesh", 62000, 10, 9000));
        empArr.add( new Admin(301, "priya", 70000, 10000));
        empArr.add( new Admin(302, "Isha", 68000, 9500));
        empArr.add(new Admin(303, "apurva", 72000, 11000));
        empArr.add( new Admin(304, "pari", 75000, 12000));
    }

    public void addEmployee(Employee e) {
        empArr.add(e);
        System.out.println("Employee added successfully!");
    }

  
    public Employee searchEmployeeById(int id) {
        for (Employee e : empArr) {
            if (e.getId() == id)
                return e;
        }
        return null;
    }

    
    public Employee searchEmployeeByName(String name) {
        for (Employee e : empArr) {
            if (e.getName().equalsIgnoreCase(name))
                return e;
        }
        return null;
    }


    
    public boolean updateSalary(int id, double newSalary) {
        Employee emp = searchEmployeeById(id);
        if (emp != null) {
            emp.setSalary(newSalary);
            System.out.println("Salary updated successfully!");
            return true;
        }
        System.out.println("Employee not found!");
        return false;
    }

    
    public boolean updateName(int id, String newName) {
        Employee emp = searchEmployeeById(id);
        if (emp != null) {
            emp.setName(newName);
            System.out.println("Name updated successfully!");
            return true;
        }
        System.out.println("Employee not found!");
        return false;
    }

   
    public boolean updateId(int oldId, int newId) {
        Employee emp = searchEmployeeById(oldId);
        if (emp != null) {
            emp.setId(newId);
            System.out.println("ID updated successfully!");
            return true;
        }
        System.out.println("Employee not found!");
        return false;
    }

    
    public boolean removeEmployeeById(int id) {
        Iterator<Employee> itr = empArr.iterator();
        while (itr.hasNext()) {
            Employee e = itr.next();
            if (e.getId() == id) {
                itr.remove();
                System.out.println("Employee removed successfully!");
                return true;
            }
        }
        System.out.println("Employee not found!");
        return false;
    }

    
    public boolean removeEmployeeByName(String name) {
        Iterator<Employee> itr = empArr.iterator();
        while (itr.hasNext()) {
            Employee e = itr.next();
            if (e.getName().equalsIgnoreCase(name)) {
                itr.remove();
                System.out.println("Employee removed successfully!");
                return true;
            }
        }
        System.out.println("Employee not found!");
        return false;
    }
    
 
    public void sortById() {
        Collections.sort(empArr, new Comparator<Employee>() {
            public int compare(Employee e1, Employee e2) {
                return e1.getId() - e2.getId();
            }
        });
        System.out.println("Sorted by ID ");
    }

  
    public void sortByName() {
        Collections.sort(empArr, new Comparator<Employee>() {
            public int compare(Employee e1, Employee e2) {
                return e1.getName().compareToIgnoreCase(e2.getName());
            }
        });
        System.out.println("Sorted by Name");
    }

    
    public void sortBySalary() {
        Collections.sort(empArr, new Comparator<Employee>() {
            public int compare(Employee e1, Employee e2) {
                if (e1.getSalary() > e2.getSalary())
                    return 1;
                else if (e1.getSalary() < e2.getSalary())
                    return -1;
                else
                    return 0;
            }
        });
        System.out.println("Sorted by Salary");
    }


    
    public void displayAll() {
        if (empArr.isEmpty()) {
            System.out.println("No employees available.");
            return;
        }
        for (Employee e : empArr) {
            System.out.println(e);
            System.out.println("--------------------------");
        }
    }

   
   
}
