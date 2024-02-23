import java.util.LinkedList;
import java.util.Queue;
// import java.util.*;      //queue and linked list sob asbe


public class binaryTree_AC {

    // Node class to represent each node in the binary tree
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    // BinaryTree class to perform operations on the binary tree
    static class BinaryTree {
        static int idx = -1;

        // Method to build the binary tree from the given array representation
        public static Node buildTree(int nodes[]) {
            idx++;
            if (nodes[idx] == -1) {
                return null;
            }
            Node newNode = new Node(nodes[idx]);
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);
            return newNode;
        }
    }

    // Method to perform preorder traversal on the binary tree
    public static void preorder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data + " ");
        preorder(root.left);
        preorder(root.right);
    }

    // Method to perform inorder traversal on the binary tree
    public static void inorder(Node root) {
        if (root == null) {
            return;
        }
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

    // Method to perform postorder traversal on the binary tree
    public static void postorder(Node root) {
        if (root == null) {
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + " ");
    }

    // Method to perform level order traversal on the binary tree
    public static void levelOrder(Node root) {
        if (root == null) {
            return;
        }
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);
        while (!q.isEmpty()) {
            Node currNode = q.remove();
            if (currNode == null) {
                System.out.println();
                if (q.isEmpty()) {
                    break;
                } else {
                    q.add(null);
                }
            } else {
                System.out.print(currNode.data + " ");
                if (currNode.left != null) {
                    q.add(currNode.left);
                }
                if (currNode.right != null) {
                    q.add(currNode.right);
                }
            }
        }
    }

    // Method to count the total number of nodes in the binary tree
    public static int CoutnOfNode(Node root) {
        if (root == null) {
            return 0;
        }
        int leftNodes = CoutnOfNode(root.left);
        int rightNodes = CoutnOfNode(root.right);
        return leftNodes + rightNodes + 1;
    }

    // Method to calculate the sum of all nodes in the binary tree
    public static int SumOfNode(Node root) {
        if (root == null) {
            return 0;
        }
        int LeftSum = SumOfNode(root.left);
        int RightSum = SumOfNode(root.right);
        return LeftSum + RightSum + root.data;
    }

    // Method to calculate the height of the binary tree
    public static int HeightOfTree(Node root) {
        if (root == null) {
            return 0;
        }
        int leftHeight = HeightOfTree(root.left);
        int rightHeight = HeightOfTree(root.right);
        int myHeight = Math.max(leftHeight, rightHeight) + 1;
        return myHeight;
    }

    // Method to calculate the diameter of the binary tree
    public static int diameteroftree(Node root) {
        if (root == null) {
            return 0;
        }
        int diam1 = diameteroftree(root.left);
        int diam2 = diameteroftree(root.right);
        int diam3 = HeightOfTree(root.left) + HeightOfTree(root.right) + 1;
        return Math.max(diam3, Math.max(diam1, diam2));
    }

    // Class to hold information about the tree (height and diameter)
    static class TreeInformation {
        int Height;
        int diameter;

        TreeInformation(int Height, int diameter) {
            this.Height = Height;
            this.diameter = diameter;
        }
    }

    // Method to calculate diameter using TreeInformation class
    public static TreeInformation Diameter(Node root) {
        if (root == null) {
            return new TreeInformation(0, 0);
        }
        TreeInformation left = Diameter(root.left);
        TreeInformation right = Diameter(root.right);
        int myHeight = Math.max(left.Height, right.Height) + 1;
        int diam1 = left.diameter;
        int diam2 = right.diameter;
        int diam3 = left.Height + right.Height + 1;
        int mydiam = Math.max(Math.max(diam1, diam2), diam3);
        TreeInformation myInfo = new TreeInformation(myHeight, mydiam);
        return myInfo;
    }

    public static void main(String[] args) {
        // Array representation of the binary tree
        int nodes[] = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        BinaryTree tree = new BinaryTree();
        // Building the binary tree
        Node root = tree.buildTree(nodes);
        // System.out.println(root.data);
        // preorder(root);
        // inorder(root);
        // postorder(root);
        // Printing level order traversal
        levelOrder(root);
        // Printing count of nodes
        System.out.println("Count of node: " + CoutnOfNode(root));
        // Printing sum of nodes
        System.out.println("Sum of node: " + SumOfNode(root));
        // Printing height of the tree
        System.out.println("Height of Tree: " + HeightOfTree(root));
        // Printing diameter of the tree
        System.out.println("Diameter of Tree: " + diameteroftree(root));
        // Printing diameter using TreeInformation class
        System.out.println("using Information method,Diameter of Tree: " + Diameter(root).diameter);
    }
}
