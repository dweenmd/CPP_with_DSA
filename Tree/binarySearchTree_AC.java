import java.util.ArrayList;

public class binarySearchTree_AC {
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
        }

    }

    public static Node insert(Node root, int val) {
        if (root == null) {
            root = new Node(val);
            return root;
        }
        // left subtree te insert hobe
        if (root.data > val) {
            root.left = insert(root.left, val);
        }
        // right subtree te insert hobe
        else {
            root.right = insert(root.right, val);
        }
        return root;
    }

    public static void inorder(Node root) {
        if (root == null)
            return;
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);

    }

    // searchin key/node value
    public static boolean search(Node root, int key) {
        // base case
        if (root == null)
            return false;

        if (root.data == key) {
            return true;
        } else if (root.data > key) {// left subtree
            return search(root.left, key);
        } else {
            return search(root.right, key);
        }
    }
    //deleting node
    public static Node delete (Node root,int val)
    {
       
        if(root==null)
        return null;
        if(root.data>val){
            root.left=delete(root.left,val);

        }
        else if(root.data<val){
            root.right=delete(root.right,val);
        }
        else{//root.data==val
            //case 01
            if(root.left==null && root.right==null )
            {
                return null;
            }
            //case 02
            if(root.left==null)
            {
                return root.right;

            }
            else if(root.right==null)
            {
                return root.left;
            }

            //case 03
            Node IS =inorderSuccessor(root.right);
            root.data=IS.data;
            root.right=delete(root.right,IS.data);
        }
        return root;
    }
    

    private static Node inorderSuccessor(Node root) {
        while(root.left!=null){
            root=root.left;
        }
       return root;
    }

    public static void printInRange(Node root,int x,int y)
    {
        if(root==null)
        {
            return;
        }
        //case 01
        if(x<=root.data&&y>=root.data){
            printInRange(root.left, x, y);
            System.out.print(root.data+" ");
            printInRange(root.right, x, y);

        }
        //case 02
        else if(y>=root.data)
        {
            printInRange(root.right, x, y);
        }
        else{
            printInRange(root.left, x, y);
        }
    }
    public static void printRoottoleaf(Node root,ArrayList<Integer>path)
    {
        if(root==null)
        return;
        //leaf 
        if(root.left==null && root.right==null)
        {
            printPath(path);
        }
        path.add(root.data);
        printRoottoleaf(root.left, path);
        printRoottoleaf(root.right, path);
        path.remove(path.size()-1);
    }
    private static void printPath(ArrayList<Integer> path) {
        for(int i=0;i<path.size();i++)
        {
            System.out.print(path.get(i)+" ->");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int values[] = { 8, 1, 3,5,9,11,13,17,6, 4, 2, 7 };
        Node root = null;
        // calling insert function for every element of values
        for (int i = 0; i < values.length; i++) {
            root = insert(root, values[i]);

        }
        inorder(root);
        System.out.println();

        // searching value
        if (search(root, 1)) {
            System.out.println("Found");
        } else {
            System.out.println("Not found");
        }
        System.out.println("After deleting node:");
        delete(root,5);
        inorder(root);
        System.out.println();System.out.print("Print in range: ");
        printInRange(root, 6, 10);
        System.out.println("\nprint node to all leaf: ");
        printRoottoleaf(root, new ArrayList<>());

    }
}