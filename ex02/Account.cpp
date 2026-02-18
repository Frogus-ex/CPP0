/* **************************************************************************
 */
/*                                                                            */
/*                                                        :::      :::::::: */
/*   Account.cpp                                        :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+ */
/*   By: tlorette <tlorette@student.42.fr>          +#+  +:+       +#+ */
/*                                                +#+#+#+#+#+   +#+ */
/*   Created: 2026/02/17 16:59:17 by tlorette          #+#    #+# */
/*   Updated: 2026/02/18 11:41:33 by tlorette         ###   ########.fr */
/*                                                                            */
/* **************************************************************************
 */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit)
{
  _accountIndex = _nbAccounts++;
  _amount = initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _totalAmount += initial_deposit;
    _displayTimestamp ();
//   std::cout << "[19920104_091532]";

  std::cout << " index:" << _accountIndex << ";amount:" << _amount
            << ";created" << std::endl;
}

Account::~Account (void)
{
    _displayTimestamp ();
//   std::cout << "[19920104_091532]";
  std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed"
            << std::endl;
}

int
Account::getNbAccounts (void)
{
  return (Account::_nbAccounts);
}

int
Account::getTotalAmount (void)
{
  return (Account::_totalAmount);
}

int
Account::getNbDeposits (void)
{
  return (Account::_totalNbDeposits);
}
int
Account::getNbWithdrawals (void)
{
  return (Account::_totalNbWithdrawals);
}

void
Account::displayAccountsInfos (void)
{
    _displayTimestamp ();
//   std::cout << "[19920104_091532]";
  std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void
Account::makeDeposit (int deposit)
{
  int p_amount;

  p_amount = _amount;
  _amount += deposit;
  _nbDeposits += 1;
  _totalAmount += deposit;
  _totalNbDeposits++;
    _displayTimestamp ();
//   std::cout << "[19920104_091532]";
  std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount
            << ";deposit:" << deposit << ";amount:" << _amount
            << ";nb_deposits:" << _nbDeposits << "\n";
}

bool
Account::makeWithdrawal (int withdrawal)
{
  int p_amount = _amount;
  if (_amount >= withdrawal)
    {
      _totalAmount -= withdrawal;
      _totalNbWithdrawals++;
      _nbWithdrawals++;
      _amount -= withdrawal;
        _displayTimestamp ();
    //   std::cout << "[19920104_091532]";
      std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount
                << ";withdrawal:" << withdrawal << ";amount:" << _amount
                << ";nb_withdrawals:" << _nbWithdrawals << "\n";
      return (true);
    }
  else
    {
        _displayTimestamp ();
    //   std::cout << "[19920104_091532]";
      std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount
                << ";withdrawal:refused"
                << "\n";
      return (false);
    }
}

int
Account::checkAmount (void) const
{
  return (_amount);
}

void
Account::displayStatus (void) const
{
    _displayTimestamp ();
//   std::cout << "[19920104_091532]";
  std::cout << " index:" << _accountIndex << ";amount:" << _amount
            << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
            << std::endl;
}

void
Account::_displayTimestamp (void)
{
  time_t now = time (NULL);
  struct tm *timeinfo = localtime (&now);
  char timestamp[20];
  strftime (timestamp, sizeof (timestamp), "[%Y%m%d_%H%M%S]", timeinfo);
  std::cout << timestamp;
}