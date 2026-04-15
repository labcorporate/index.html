<!DOCTYPE html>
<html lang="es">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Reporte de Participantes</title>

<style>
:root{
    --primary:#b31d15;
    --bg:#f5f7fa;
    --text:#333;
    --text-soft:#6b7280;
}

body {
    font-family: Arial, sans-serif;
    background: var(--bg);
    margin: 0;
    color: var(--text);
}

.container {
    max-width: 1000px;
    margin: 40px auto;
    background: #fff;
    border-radius: 12px;
    padding: 30px;
    box-shadow: 0 10px 30px rgba(0,0,0,0.08);
}

.header {
    text-align: center;
    margin-bottom: 25px;
}

h1 {
    font-size: 22px;
    margin: 0;
}

.summary {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(180px, 1fr));
    gap: 15px;
    margin: 25px 0;
}

.card {
    padding: 15px;
    border-radius: 10px;
    text-align: center;
    font-weight: bold;
}

.completed { background:#e6f7ec; color:#1e7e34;}
.not-started { background:#fdecea; color:#c82333;}
.in-progress { background:#fff3cd; color:#856404;}
.low { background:#e2e3e5; color:#383d41;}

.filters{
    margin:20px 0;
    display:flex;
    flex-wrap:wrap;
    gap:10px;
}

.filter-btn{
    padding:8px 14px;
    border-radius:20px;
    border:none;
    cursor:pointer;
    background:#eee;
}

.filter-btn.active{
    background:var(--primary);
    color:#fff;
}

table {
    width: 100%;
    border-collapse: collapse;
}

th, td {
    padding: 10px;
    border-bottom: 1px solid #ddd;
    font-size: 14px;
}

th {
    background: #f1f3f5;
    text-align:left;
}

.center{text-align:center;}

.footer {
    margin-top: 30px;
    font-size: 12px;
    color: #888;
    text-align: center;
}
</style>
</head>

<body>

<div class="container">

<div class="header">
    <h1>Reporte de Participantes</h1>
</div>

<div class="summary">
    <div class="card completed" id="c1"></div>
    <div class="card not-started" id="c2"></div>
    <div class="card in-progress" id="c3"></div>
    <div class="card low" id="c4"></div>
</div>

<div class="filters">
  <button class="filter-btn active" onclick="filter('todos',this)">Todos</button>
  <button class="filter-btn" onclick="filter('Completó',this)">Completaron</button>
  <button class="filter-btn" onclick="filter('No cursó',this)">No cursaron</button>
  <button class="filter-btn" onclick="filter('En curso / incompleto',this)">En curso</button>
  <button class="filter-btn" onclick="filter('Bajo rendimiento',this)">Bajo rendimiento</button>
</div>

<table>
<thead>
<tr>
<th>Nombre</th>
<th>Email</th>
<th class="center">Promedio</th>
<th class="center">Estado</th>
</tr>
</thead>
<tbody id="tableBody"></tbody>
</table>

<div class="footer">
Corporate Solutions · Acrópolis Lab
</div>

</div>

<script>
const data = [
["Alejandro Arroyave","alejandro.arroyave@adenuniversity.edu.pa",97.5,"Completó"],
["Alexis Cuartas","alexis.cuartas@adenuniversity.edu.pa",87.5,"Completó"],
["Ana Taborda","ana.taborda@adenuniversity.edu.pa",97.5,"Completó"],
["Andres Alzate Meneses","andres.alzate@adenuniversity.edu.pa",null,"En curso / incompleto"],
["Arbey Alexander Restrepo Patiño","alexander.restrepo@adenuniversity.edu.pa",95.25,"Completó"],
["Arielys Zuniga","arielys.zuniga@adenuniversity.edu.pa",98,"En curso / incompleto"],
["Carol Esteffan Jurado Serna","carol.jurado@adenuniversity.edu.pa",89,"Completó"],
["Carolina Mejía Higinio","carolina.mejia@adenuniversity.edu.pa",97.5,"Completó"],
["Claudia Patricia Alzate Machado","claudia.alzate@adenuniversity.edu.pa",97.5,"Completó"],
["Daniel Villada","daniel.villada@adenuniversity.edu.pa",95,"Completó"],
["Daniela Ospina Bedoya","daniela.ospina@adenuniversity.edu.pa",100,"Completó"],
["Edwin Daniel Sosa Correa","edwindaniel.sosa@adenuniversity.edu.pa",78.75,"Completó"],
["Edwin Ortiz","edwin.ortiz@adenuniversity.edu.pa",null,"En curso / incompleto"],
["Elkin Alejandro Ossa Rueda","alejandro.ossa@adenuniversity.edu.pa",96.25,"Completó"],
["Erika Andrea Florez Gonzalez","erika.florez@adenuniversity.edu.pa",100,"Completó"],
["Gisella del Carmen Valarezco Estrada","gissella.valarezo@adenuniversity.edu.pa",86.25,"Completó"],
["Jeison Cordero","jeison.cordero@adenuniversity.edu.pa",65.75,"Bajo rendimiento"],
["Jennifer Mosquera","jennifer.mosquera@adenuniversity.edu.pa",66.25,"Bajo rendimiento"],
["Jensy Mena","jensy.mena@adenuniversity.edu.pa",100,"Completó"],
["Jeremy Alexander Mojica Page","jeremy.mojica@adenuniversity.edu.pa",98,"Completó"],
["Johan sneider Quintana López","johan.quintana@adenuniversity.edu.pa",95.25,"Completó"],
["Johayni Ortega","johayni.ortega@adenuniversity.edu.pa",96.25,"Completó"],
["José Mario Pedrozo Vasquez","jose.pedrozo@adenuniversity.edu.pa",95,"Completó"],
["Juan Camilo Tabares Mesa","juan.tabares@adenuniversity.edu.pa",85,"Completó"],
["Juan Carlos David Cely Suarez","juancarlos.cely@adenuniversity.edu.pa",75,"Completó"],
["Juan Esteban Otalvaro Arenas","juan.otalvaro@adenuniversity.edu.pa",100,"Completó"],
["Juan Lopez","juan.lopez@adenuniversity.edu.pa",91.5,"En curso / incompleto"],
["Julián Felipe Jaramillo Alvarez","julian.jaramillo@adenuniversity.edu.pa",100,"Completó"],
["Julian Villa Ospina","julian.villa@adenuniversity.edu.pa",82.5,"Completó"],
["Kimbery Martinez","kimberly.martinez@adenuniversity.edu.pa",null,"En curso / incompleto"],
["Laura Vanessa Toro Quiceno","laura.toro@adenuniversity.edu.pa",66.25,"Bajo rendimiento"],
["Lisseth Cristina Gomez Cardona","lisseth.gomez@adenuniversity.edu.pa",85.5,"Completó"],
["Luis Eduardo Florez Ricardo","luis.florez@adenuniversity.edu.pa",85.75,"Completó"],
["Luisa Fernanda Luna Herrera","luisafernanda.herrera@adenuniversity.edu.pa",95.25,"Completó"],
["Luisa Uribe","luisafernanda.uribe@adenuniversity.edu.pa",96.25,"Completó"],
["Maria Alejandra López Aguiar","mariaalejandra.lopez@adenuniversity.edu.pa",97.5,"Completó"],
["Mariana Muñoz","mariana.munoz@adenuniversity.edu.pa",97.5,"Completó"],
["Mario Javier Palacio Bentancur","mario.palacio@adenuniversity.edu.pa",95.25,"Completó"],
["Mayerli Andrea Espinosa López","mayerli.espinosa@adenuniversity.edu.pa",85.5,"Completó"],
["Merichel Argelis Avila Santos","merichel.avila@adenuniversity.edu.pa",97.75,"Completó"],
["Noris Elena Franco Dominguez","noris.franco@adenuniversity.edu.pa",97.5,"Completó"],
["PAOLA PINILLA","andrea.pinilla@adenuniversity.edu.pa",98,"Completó"],
["Raul Lopez","raul.lopez@adenuniversity.edu.pa",96.25,"Completó"],
["Sebastian Durango","sebastian.durango@adenuniversity.edu.pa",95.25,"Completó"],
["Sor Milena Arboleda Cardona","milena.arboleda@adenuniversity.edu.pa",78.75,"Completó"],
["Tira Linn Mejía Bellasteros","tira.mejia@adenuniversity.edu.pa",85,"Completó"],
["Valentina Arroyave Cadavid","valentina.arroyave@adenuniversity.edu.pa",100,"Completó"],
["Valeria Santander","valeria.santander@adenuniversity.edu.pa",97.5,"Completó"],
["Veronica Julieth Tejada Vera","veronica.tejada@adenuniversity.edu.pa",97.5,"Completó"],
["Viviana Vanessa Córdoba Meneses","viviana.cordoba@adenuniversity.edu.pa",95.5,"En curso / incompleto"],
["Yessica Mercedes Torres Muñoz","yessica.torres@adenuniversity.edu.pa",95.25,"Completó"]
];

let current='todos';

function calculateSummary(){
    const total = data.length;
    const completed = data.filter(r=>r[3]=="Completó").length;
    const noCurso = data.filter(r=>r[3]=="No cursó").length;
    const progreso = data.filter(r=>r[3]=="En curso / incompleto").length;
    const bajo = data.filter(r=>r[3]=="Bajo rendimiento").length;

    document.getElementById("c1").innerHTML = `${completed} Completaron`;
    document.getElementById("c2").innerHTML = `${noCurso} No cursaron`;
    document.getElementById("c3").innerHTML = `${progreso} En curso`;
    document.getElementById("c4").innerHTML = `${bajo} Bajo rendimiento`;
}

function filter(f,el){
    current=f;
    document.querySelectorAll('.filter-btn').forEach(b=>b.classList.remove('active'));
    el.classList.add('active');
    render();
}

function render(){
    const body=document.getElementById("tableBody");

    const filtered = current==='todos'
        ? data
        : data.filter(r=>r[3]===current);

    body.innerHTML = filtered.map(r=>{
        const prom = r[2]!==null ? r[2].toFixed(1) : "—";

        return `
        <tr>
        <td>${r[0]}</td>
        <td style="font-size:12px;color:#666;">${r[1]}</td>
        <td class="center">${prom}</td>
        <td class="center">${r[3]}</td>
        </tr>
        `;
    }).join('');
}

calculateSummary();
render();
</script>

</body>
</html>
