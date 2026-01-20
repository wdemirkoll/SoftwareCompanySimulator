# Software Company Simulator

Short Description 💬
-----------------
Console simple software company simulator — a small, console-based company management simulator implemented in C++. The player sets up a software company and CEO name, manages company money, hires developers (junior/mid/senior), creates different project types (application, game, security) subject to developer requirements, sells completed projects for revenue, and tracks company statistics. The program is a lightweight demonstration of basic game/business logic, resource requirements, and state management using simple C++ constructs.

Announcement 📢
------------
This project is written using C++17.

Features ✅
--------
- Start with a testing gift balance ($5000) 🎁  
- Hire developers: Junior ($500), Mid ($1500), Senior ($4000) 👩‍💻👨‍💻  
- Create projects when developer requirements are met:
  - Application project (requires 2 Junior + 1 Mid) 🖥️  
  - Game project (requires 6 Mid + 2 Senior) 🎮  
  - Security project (requires 5 Mid + 10 Senior) 🔐  
- Sell projects for revenue:
  - Application: +$1500  
  - Game: +$4500  
  - Security: +$12500  
- Track and display company statistics: Company Name, CEO, Company Money, Developer counts, Project counts 📊  
- Simple menus for: New Project, Sell Project, Buy Developer, Exit 🧭

Example usage / sample session 💡
------------------------------
A short example flow (user input shown after prompts):

```
Enter your software company name: TechCorp
Enter your name: Alice

[Main menu] Choose: 3   // Buy Developer
Choose: 1              // Buy junior ($500)
Choose: 1             // Buy junior ($500)
Choose: 2            // Buy mid ($1500)

[Main menu] Choose: 1   // New Project
Choose: 1              // Create application project (requires 2 junior + 1 mid)

[Main menu] Choose: 2   // Sell Project
Choose: 1              // Sell application (+$1500)

[Main menu] Choose: 4   // Exit
```

Notes and limitations ⚠️
---------------------
- The current implementation uses global variables and basic input handling. Non-numeric or malformed input may break the program.  
- Hiring developers requires sufficient company money; purchases fail if funds are insufficient.  
- Creating projects requires the specified developer counts; if requirements are not met the project is not created.  
- Selling a project requires that you actually have at least one of that project type.  
- The program is single-player and does not persist state between runs.  

Author 👤
------
wdemirkoll — GitHub: @wdemirkoll

📅 January 2026
