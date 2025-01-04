
# **Explanation of the Room Booking System in our course project**

# Data Structure Used:

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

#  QUCIK Sorting:

The set ensures that rooms are always sorted by their room ID, which helps with efficient searching and management.
Uniqueness: A set automatically eliminates any duplicate entries, ensuring that a room cannot be booked more than once unless explicitly removed.
Efficient Operations: Searching, inserting, and removing rooms from the set all take logarithmic time, making the system efficient even as the number of rooms increases.
In essence, the room booking system works by maintaining a set of available rooms, and when a user books a room, the system checks availability and removes the room from the set if it’s booked successfully. If not, the system notifies the user of the unavailability.

# Summary of Key Data Structures:

List/Array: Used to store sequences of items (e.g., orders, inventory).

Dictionary (Hash Map): Used for fast lookups of menu items, inventory, and reservations.

Queue: Ensures orders are processed in the order they were placed (FIFO).

Heap/Priority Queue: Optionally used for prioritizing low-stock items in inventory.

Set: Ensures uniqueness, especially for reporting purposes.

Tuple/NamedTuple: Can be used to store structured data (e.g., order details, reservation information).

# Summary of Algorithms:

Search Algorithms: Fast lookup for menu items, inventory, and reservations using dictionary key searches.

Update Algorithms: For modifying quantities in inventory or changing prices/availability of items.

Comparison Algorithms: To verify sufficient payment during order confirmation.

FIFO (First In, First Out): For managing order fulfillment (i.e., processing orders in the order they are received).

Sorting Algorithms: Used for ranking items based on their sales or popularity for analytics.

Simple Iteration: Used in various functions to traverse lists (e.g., orders, inventory, menu).

**Efficiency and Complexity:**
Time Complexity: Many operations (e.g., searching an item in a dictionary, updating inventory) typically take O(1), making the system efficient.
Space Complexity: The space complexity depends on the number of orders, inventory items, and reservations stored in dictionaries and lists.


**LINK FOR CODE SNIPPET OF ROOM BOOKING :https://github.com/sripriya2505/portfolio.github.io/blob/1ab445688214a6e1372820937afd3893c7d71695/snippet.cpp**

**LINK FOR THE COMPLETE CODE FOR RESTAURANT MANAGEMENT :


# **Customer Queue Management:**
The Customer Queue Management system ensures that customers are served in the order they arrive. It uses a queue data structure where customers are added to the queue as they arrive and removed in the same order (FIFO - First In, First Out) when they are served. This helps ensure a fair and efficient process for handling customers.

The primary algorithm used here is the FIFO (First In, First Out) algorithm, which ensures that customers are served in the order they joined the queue. This approach is simple but effective, ensuring that no customer is skipped or kept waiting unnecessarily.







