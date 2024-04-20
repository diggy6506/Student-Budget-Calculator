#include <stdio.h>

int main() {
    float student_loan_per_term, bursaries_per_term, work_earnings_per_week, rent_per_week, food_hygiene_per_week,
        travel_per_week, phone_per_month, books_per_term, utilities_per_week, broadband_per_month, savings_per_term, other_per_term;

    float total_costs_per_week, total_costs_per_month, total_costs_per_term, total_costs_per_year,
        remaining_money_per_week, remaining_money_per_month, remaining_money_per_term, remaining_money_per_year;

  
    printf("Enter your income and expenses to calculate remaining money and total costs for each week, month, term and year.\n\n");
    printf("Student Loan Per Term: ");
    scanf("%f", &student_loan_per_term);
    printf("Scholarships/Bursaries Per Term: ");
    scanf("%f", &bursaries_per_term);
    printf("Work Earnings Per Week: ");
    scanf("%f", &work_earnings_per_week);
    printf("Rent Costs Per Week: ");
    scanf("%f", &rent_per_week);
    printf("Food and Hygiene Budget Per Week: ");
    scanf("%f", &food_hygiene_per_week);
    printf("Travel Costs Per Week: ");
    scanf("%f", &travel_per_week);
    printf("Phone Bill Per Month: ");
    scanf("%f", &phone_per_month);
    printf("Books Per Term: ");
    scanf("%f", &books_per_term);
    printf("Utility Bills Per Week: ");
    scanf("%f", &utilities_per_week);
    printf("Broandband Per Month: ");
    scanf("%f", &broadband_per_month);
    printf("Savings Per Term: ");
    scanf("%f", &savings_per_term);
    printf("Other Costs Per Term: ");
    scanf("%f", &other_per_term);

    total_costs_per_week = rent_per_week + food_hygiene_per_week + travel_per_week + (phone_per_month / 4) + utilities_per_week + (books_per_term /  17.333) + (other_per_term / 17.333) + (savings_per_term / 17.333) + (broadband_per_month / 4);
    total_costs_per_month = total_costs_per_week * 4;
    total_costs_per_term = total_costs_per_month * 4;
    total_costs_per_year = total_costs_per_week * 52;
   
    remaining_money_per_week = (student_loan_per_term / 16) + (bursaries_per_term / 16) + (work_earnings_per_week) - (total_costs_per_month / 4);
    remaining_money_per_month = (student_loan_per_term / 4) + (bursaries_per_term / 4) + (work_earnings_per_week * 4) - total_costs_per_month;
    remaining_money_per_term = remaining_money_per_month * 4;
    remaining_money_per_year = remaining_money_per_month * 12;

    printf("\nRemaining Money Per Week: %.2f\n", remaining_money_per_week);
    printf("Remaining Money Per Month: %.2f\n", remaining_money_per_month);
    printf("Remaining Money Per Term: %.2f\n", remaining_money_per_term);
    printf("Remaining Money Per Year: %.2f\n", remaining_money_per_year);
   
    printf("\nTotal Cost Per Week: %.2f\n", total_costs_per_week);
    printf("Total Cost Per Month: %.2f\n", total_costs_per_month);
    printf("Total Cost Per Term: %.2f\n", total_costs_per_term);
    printf("Total Cost Per Year: %.2f\n\n", total_costs_per_year);

  

    return 0;
}
