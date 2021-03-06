#include "order.h"

Order::Order() {
	this->orderID = 0;
	this->date = "";
	this->quantity = 0;
	this->amountPaid = 0;
}

Order::Order(int orderID, string date, int quantity, int amountPaid) {
	this->orderID = orderID;
	this->date = date;
	this->quantity = quantity;
	this->amountPaid = amountPaid;
}

int Order::getOrderID() {
	return orderID;
}

string Order::getDate() {
	return date;
}

int Order::getQuantity() {
	return quantity;
}

int Order::getAmountPaid() {
	return amountPaid;
}

string Order::to_string() {
	string line;
	line += "Order ID: " + orderID;
	line += "\nDate Placed: " + date;
	line += "\nQuantity Ordered: " + quantity;
	line += "\nAmount Paid: " + amountPaid;

	return line;
}
