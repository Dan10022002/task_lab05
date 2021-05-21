#include <Account.h>
#include <Transaction.h>

#include <gtest/gtest.h>

TEST(return_balance, return_values)
{
  int balance = 10000;
  Account Basia (1, balance);
  int result = Basia.GetBalance();

  EXPECT_EQ(result, balance);
}

TEST(try_transaction, transactions)
{
  Account Basia (1, 10000), Petia (2, 20000);
  Transaction tr1;
  tr1.Make(Petia, Basia, 2000);
  int result = Basia.GetBalance();
  EXPECT_EQ(result, 12000);
}
