// Bryant Huynh
// CPSC 121L-01
// 11/14/2023
// 22bhuynh2@csu.fullerton.edu
// @bryqnt
//
// Lab 11-1
// 
// 

#include <memory>
#include <string>

class Customer {
 public:
  // ====================== YOUR CODE HERE ======================
  // 1. Define a constructor using member initializer list syntax
  //    according to the README.
  // 2. Define the accessor functions (i.e. the getter functions)
  //    `GetName`, `GetProductCount`, and `GetNextCustomer`.
  //    You do not need to create mutator functions (setters).
  // 3. Define the recursive functions specified in the README.
  // ============================================================
Customer(const std::string& name, int product_count,
  std::shared_ptr<Customer> next_customer): name_(name),product_count_(product_count),next_customer_(next_customer) {}

  const std::string& GetName() const {
    return name_;
  }
  int GetProductCount() {
    return product_count_;
  }
  std::shared_ptr<Customer> GetNextCustomer() {
    return next_customer_;
  }
  int TotalCustomersInLine() const;
  int TotalProductsInLine() const;
  const std::string& FirstAlphabeticalCustomerInLine() const;

 private:
  std::string name_;
  int product_count_;
  std::shared_ptr<Customer> next_customer_;
};
