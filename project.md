SARNATH CITY DESIGN
Introduction
The Design and Analysis of Algorithms course delves into the principles of creating efficient algorithms to tackle real-world challenges. It encompasses essential concepts such as recursion, iteration, backtracking, and dynamic programming, alongside the application of data structures like trees, graphs, and heaps to address complex problems across various fields.

This course bridges the gap between algorithmic theory and practical implementation, demonstrating its relevance in areas such as optimizing transportation routes and managing large-scale business datasets.

Course Project Overview
The project centers on identifying and addressing inefficiencies in urban planning that necessitate engineering solutions. Based on findings from a white paper, the problem domain includes challenges in traffic flow, waste management, and infrastructure design. Each team member is tasked with analyzing specific business cases and proposing algorithm-driven solutions to mitigate these issues effectively.

SARNATH CITY: A Smart City


![image](https://github.com/user-attachments/assets/832d78a7-2f02-4985-82a0-f2c1b2dc528a)


Overview
A smart city is a concept that incorporates advanced technology and digital solutions to improve the quality of life for its residents while enhancing sustainability, efficiency, and accessibility. For a city known for tourism, a smart tourism city integrates these technologies to provide a seamless experience for visitors, alongside supporting local infrastructure and services.

Residential Areas (35-40%) Area: 525 - 600 sq km
Commercial and Business Districts (15-20%) Area: 225 - 300 sq km
Industrial Zones (10-15%) Area: 150 - 225 sq km
Green Spaces and Parks (10-15%) Area: 150 - 225 sq km
Transportation and Infrastructure (10-15%) Area: 150 - 225 sq km
Utilities and Energy Infrastructure (5-10%) Area: 75 - 150 sq km
Education and Healthcare (5-10%) Area: 75 - 150 sq km
Cultural and Social Spaces (5-10%) Area: 75 - 150 sq km
Other Miscellaneous Areas (1-5%) Area: 15 - 75 sq km
BUDGET
The initial budget for transforming a 1,500 sq km city into a smart city ranges from $20 billion to $45 billion, depending on factors like infrastructure, technology integration, and sustainability. Key expenditures include smart roads, energy systems, IoT infrastructure, and public services, along with development of residential and commercial spaces. The budget can vary based on regional conditions, government support, and the city's technology ambitions.

SUSTAINABILITY
1)Solar powered street lights 2)Electric roads for transportation 3)Hybrid boats (solar/electric) 4)Hydropower plants 5)Sewage treatmennt 6)30% green spaces

TEAM DETAILS


![image](https://github.com/user-attachments/assets/a07cb2e1-122a-4a06-b2a0-c18feb7455d2)


As per the Problem Statement the following  data structures and Algorithms are implemented

Queue (FIFO - First In, First Out)
Map (Key-Value Pair)
Priority Queue (Min-Heap)
Set
Vector of Tuples
Dijkstra's Algorithm (Shortest Path)
Depth-First Search (DFS) / Breadth-First Search (BFS) (Graph Traversal)
Linear Search
Greedy Approach (In the context of room booking)
Sorting (Implicit)

Greedy approach is used in the context of room booking

Explanation of the Room Booking System
Data Structure Used:

A set is used to store the available rooms. The reason for using a set is that it automatically sorts the rooms by their room ID, and it ensures that no duplicate rooms exist.
Each element in the set is a pair consisting of:
A unique room ID (integer) that identifies the room.
A room type (string) that indicates the category of the room, such as "Single", "Double", or "Suite".
Booking a Room:

When a user wants to book a room, the system checks if the requested room (based on its ID and type) exists in the set of available rooms.
If the room is found, the system removes the room from the set, which effectively "books" the room and makes it unavailable for other users.
A confirmation message is shown to the user that the room has been successfully booked.
If the room is not available (either it was already booked or doesn't exist), the system informs the user that the room is unavailable.
Key Operations:

Search for Room: The system looks for a room by matching both the room ID and the room type.
Remove Room: When a room is successfully booked, it is removed from the set of available rooms.
Error Handling: If the room isn't found (i.e., it’s already booked or doesn't exist), the system displays an error message.
Why Use a Set:

Sorting: The set ensures that rooms are always sorted by their room ID, which helps with efficient searching and management.
Uniqueness: A set automatically eliminates any duplicate entries, ensuring that a room cannot be booked more than once unless explicitly removed.
Efficient Operations: Searching, inserting, and removing rooms from the set all take logarithmic time, making the system efficient even as the number of rooms increases.
In essence, the room booking system works by maintaining a set of available rooms, and when a user books a room, the system checks availability and removes the room from the set if it’s booked successfully. If not, the system notifies the user of the unavailability.

Summary of Key Data Structures:
List/Array: Used to store sequences of items (e.g., orders, inventory).

Dictionary (Hash Map): Used for fast lookups of menu items, inventory, and reservations.

Queue: Ensures orders are processed in the order they were placed (FIFO).

Heap/Priority Queue: Optionally used for prioritizing low-stock items in inventory.

Set: Ensures uniqueness, especially for reporting purposes.

Tuple/NamedTuple: Can be used to store structured data (e.g., order details, reservation information).

Summary of Algorithms:
Search Algorithms: Fast lookup for menu items, inventory, and reservations using dictionary key searches.
Update Algorithms: For modifying quantities in inventory or changing prices/availability of items.
Comparison Algorithms: To verify sufficient payment during order confirmation.
FIFO (First In, First Out): For managing order fulfillment (i.e., processing orders in the order they are received).
Sorting Algorithms: Used for ranking items based on their sales or popularity for analytics.
Simple Iteration: Used in various functions to traverse lists (e.g., orders, inventory, menu).
Efficiency and Complexity:
Time Complexity: Many operations (e.g., searching an item in a dictionary, updating inventory) typically take O(1), making the system efficient.
Space Complexity: The space complexity depends on the number of orders, inventory items, and reservations stored in dictionaries and lists.












