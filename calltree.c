{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fmodern\fprq1\fcharset0 Courier New;}{\f1\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.14393}\viewkind4\uc1 
\pard\widctlpar\sl252\slmult1\f0\fs22 ? funca(?);\par
? funcb(?);\par
? funcc(?);\par
\par
void main()\{\par
  printf(\ldblquote main (Level 0)\\n\rdblquote );\par
  // Repeat twice:\par
  //   Call funca\par
  //   Call funcc\par
\}\par
? funca(?)\{\par
  // indent 4 spaces * level of function call\par
  // print function name, level, and address of variable storing level    \par
  // Call funcb\par
  // Call funcc\par
? funcb(?)\{\par
  // indent 4 spaces * level of function call\par
  // print function name, level, and address of variable storing level    \par
  // Call funcc\par
  // Call funcc\par
? funcc(?)\{\par
  // indent 4 spaces * level of function call\par
  // print function name, level, and address of variable storing level    \par
  \par

\pard\sa200\sl276\slmult1\f1\lang9\par
}
 