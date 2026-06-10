import java.util.Scanner;

public class StudentDetail {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student name: ");
        String name = scanner.nextLine();

        System.out.print("Enter student id: ");
        String id = scanner.nextLine();

        System.out.print("Enter student course: ");
        String course = scanner.nextLine();

        System.out.print("Enter student age: ");
        int age = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Enter student grade: ");
        String grade = scanner.nextLine();

        System.out.println("\nStudent Details:");
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("Course: " + course);
        System.out.println("Age: " + age);
        System.out.println("Grade: " + grade);

        scanner.close();
    }
}
