    .global asm_on
asm_on:
  PUSH {LR}
  BL on
  ADD R0, R0, #4
  BL off
  POP {PC}
