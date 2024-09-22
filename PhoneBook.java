import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Contact{
    int cid;
    String cname;
    String ctype;
    int noOfcon;
    Set<Integer> pnumbers;
    
    Contact(int cid,
    String cname,
    String ctype,
    int noOfcon,
    Set<Integer> pnumbers){
        this.cid = cid;
        this.cname = cname;
        this.ctype = ctype;
        this.noOfcon = noOfcon;
        this.pnumbers = pnumbers;
        
    }
    
}

class PhoneBook{
    String catname;
    int CNum;
    List<Contact> clist;
    
    PhoneBook(String catname,
    int CNum,
    List<Contact> clist){
        this.catname = catname;
        this.CNum = CNum;
        this.clist = clist;
        
    }
}

public class Solution {
    public static void main(String args[]) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        Scanner sc = new Scanner(System.in);
        int loop1 = sc.nextInt();sc.nextLine();
        List<Contact> clist = new ArrayList<>();
        for(int i=0;i<loop1;i++){
            Set<Integer> set = new TreeSet<>();
            int cid = sc.nextInt();sc.nextLine();
            String cname = sc.nextLine();
            String ctype = sc.nextLine();
            int noOfcon = sc.nextInt();sc.nextLine();
            for(int j=0;j<noOfcon;j++){
                int add = sc.nextInt();sc.nextLine();
                set.add(add);
            }
            Contact c = new Contact(cid, cname, ctype, noOfcon, set);
            clist.add(c);
        }
        int loop3 = sc.nextInt();sc.nextLine();
        Map<Integer,PhoneBook> mp = new HashMap<>();
        List<PhoneBook> pList = new ArrayList<>();
        for(int k=0;k<loop3;k++){
            String catname = sc.nextLine();
            int CNum = sc.nextInt();
            for(int l=0;l<CNum;l++){
                int id = sc.nextInt();sc.nextLine();
                for(Contact c : clist){
                    if(id == c.cid){
                        PhoneBook p = new PhoneBook(catname, CNum, clist);
                        pList.add(p);
                    }
                   
                }
                
            }
        }
        
        String find1 = sc.nextLine();
        String find2 = sc.nextLine();
        boolean flag = false;
        
            for(Contact c : clist){
                if(c.cname.equalsIgnoreCase(find1)){
                    flag = true;
                    System.out.println(c.cid);
                    System.out.println(c.cname);
                    System.out.println(c.ctype);
                    for(Integer i : c.pnumbers){
                        System.out.println(i);
                    }
                }
            }
            
        
        if(!flag){
            System.out.println("Not Found!");
        }
        Set<String> setn = new TreeSet<>();
        for(PhoneBook p : pList){
            if(find2.equalsIgnoreCase(p.catname)){
                for(Contact c : p.clist){
                    setn.add(c.cname);
                }
            }
        }
        if(setn.isEmpty()){
            System.out.println("No contacts Found!");
        }else{
            System.out.println(String.join(", ", setn));
        }
    }
}
