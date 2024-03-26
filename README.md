[Academic project]


## The Corner Grocer Item Tracking System

This README provides a comprehensive overview of the Corner Grocer Item Tracking System, a software solution designed for managing inventory and tracking items for small to medium-sized grocery stores. Developed to streamline the process of inventory management, this system offers a user-friendly interface for tracking product sales, managing stock levels, and generating sales reports. Below you'll find details about the system's features, installation guide, usage instructions, and contribution guidelines.

### Features

- **Inventory Management**: Easily add, update, and remove items from your inventory. Keep track of stock levels to ensure you never run out of key products.
- **Sales Tracking**: Monitor sales transactions in real-time. This feature allows for the recording of each item sold, updating inventory levels accordingly.
- **Reporting**: Generate detailed sales reports that help in understanding sales trends, popular items, and inventory needs. These insights can aid in making informed purchasing and marketing decisions.
- **User-friendly Interface**: Designed with simplicity in mind, ensuring ease of use for store employees and managers alike.

### Installation Guide

1. **Clone the Repository**
   - Use `git clone https://github.com/Sequence9/The-Corner-Grocer-Item-Tracking-System.git` to clone the repository to your local machine.

2. **Set Up the Environment**
   - Ensure that Python is installed on your system. This project requires Python 3.6 or later.
   - Install the required Python packages using `pip install -r requirements.txt`.

3. **Initialize the Database**
   - Run `python init_db.py` to create the database and tables needed for the system.

4. **Start the Application**
   - Launch the system by running `python app.py`. Access the application through the web interface provided.

### Usage Instructions

- **Adding New Items**: Navigate to the Inventory Management section and use the 'Add New Item' form to enter details about new stock.
- **Updating Inventory**: Use the 'Update Item' feature to modify the quantity or details of existing inventory items.
- **Recording Sales**: Enter sales transactions through the Sales Tracking section, which automatically updates inventory levels.
- **Viewing Reports**: Access the Reporting feature to generate and view sales and inventory reports for selected time periods.
