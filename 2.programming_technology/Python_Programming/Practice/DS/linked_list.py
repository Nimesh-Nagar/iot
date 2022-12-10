
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

#head --> 
class LinkedList:
    def __init__(self):
        self.head = None

# traversing and printing data    
    def printList(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next    

    def push(self,new_data):
        new_node = Node(new_data)
        new_node.next = self.head 
        self.head = new_node



if __name__ == "__main__":

    #start with empty list
    llist = LinkedList() # head

    llist.head = Node(1) # node 1 data 
    second = Node(2)
    third = Node(3)

    llist.head.next = second # Link first node with second node
    second.next = third      # Link second node with the third node

    llist.printList()

    # push node at begining
    llist.push(22)
    print("New Node added : ")
    llist.printList()




