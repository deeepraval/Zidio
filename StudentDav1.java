
package jdbc.dav;

import java.sql.Connection;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

import com.mysql.cj.xdevapi.DatabaseObject;

import jdbc.bean.StudentBean;
import jdbc.util.DBConnected1;
import jdbc.util.DBConnection;

//  Statement(I)
//    |
// StudentDao----Student Table
public class StudentDav1
{
	public int insertStudent() 
	{
		DatabaseObject sbean = null;
		String insertQuery = "INSERT INTO Student(name,std,marks) VALUES('"+sbean.getName()+"','"+((StudentBean) sbean).getStd()+"','"+((StudentBean) sbean).getMarks()+")";
		
		System.out.println("insertQuery :: "+insertQuery);
		
		
		int rowsAffected =  0;
		
		Statement stmt = null;
		
		// 1) Get DBConnection object
		Connection conn = DBConnected1.getConnection();
		
		// 2) validate conn object
		if (conn!=null) 
		{
			try 
			{
				// 3) create statement object by conn
				stmt = conn.createStatement();

				rowsAffected = stmt.executeUpdate(insertQuery);
				
				if (rowsAffected > 0) 
				{
					System.out.println("Student records inserted : " + rowsAffected);
					
				} else 
				{
					System.out.println("Student records not inserted : " + rowsAffected);
				}
				
			}catch(SQLException e) 
			{
				e.printStackTrace();
			}
		} else 
		{
			System.out.println("StudentDao :: insertStudent() ---Db not connected");
		}
		return rowsAffected;
	}
	public void updateStudent() 
	{
	}
	public void deleteStudent() 
	{
	}
	public void getAllStudentRecords() 
	{
	}
	
	
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the name :: ");
		String name = sc.nextLine();
		System.out.println("Enter the std :: ");
		String std = sc.nextLine();
		System.out.println("Enter the marks :: ");
		int marks = sc.nextInt();
		
		StudentBean sbean = new StudentBean(0,name,std,marks);
		
		StudentDav sdav = new StudentDav();
		
		int rowsAffected = sdav.insertStudent(sbean);
		
		if (rowsAffected > 0) 
		{
			System.out.println("Student records inserted : " + rowsAffected);
			
		} else 
		{
			System.out.println("Student records not inserted : " + rowsAffected);
		}
		
		StudentDav1 dao = new StudentDav1();
		
		dao.insertStudent();
		
		
	}
	
}
