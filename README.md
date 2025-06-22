Project Overview – Robotic Arm Link Optimization in C++ 

This project focuses on designing a one-link robotic arm actuated by a DC motor, using a two-part C++ program:

 Part 1: Link Dimension Optimization
Calculates and iteratively adjusts the link’s dimensions (circular or rectangular) to withstand gravitational, inertial, and payload stresses without exceeding material yield strength. It uses beam theory and stress equations to find the safest and lightest geometry.

 Part 2: Motor-Gearbox Selection
Based on the optimized link, the program determines required torque/speed and filters motor-gearbox combinations from a database. Using a user-defined cost function (weight, diameter, or width), it selects the most efficient setup.

 Final Output:
Optimized link dimensions and mass
Final stress value
Best-fit motor-gearbox pair based on performance and design cost
