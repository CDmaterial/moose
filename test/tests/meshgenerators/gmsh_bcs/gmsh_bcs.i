[MeshGenerators]
  [./fmg]
    type = FileMeshGenerator
    file = plate_hole.msh
  []
[]

[Mesh]
  type = MeshGeneratorMesh
[]

[Variables]
  [./u]
  [../]
[]

[Kernels]
  [./diff]
    type = Diffusion
    variable = u
  [../]
[]

[BCs]
  [./left]
    type = DirichletBC
    variable = u
    boundary = 12
    value = 0
  [../]
  [./right]
    type = DirichletBC
    variable = u
    boundary = 10
    value = 1
  [../]
[]

[Executioner]
  type = Steady

  solve_type = 'PJFNK'

  petsc_options_iname = '-pc_type -pc_hypre_type'
  petsc_options_value = 'hypre boomeramg'
[]

[Outputs]
  execute_on = 'timestep_end'
  exodus = true
[]
