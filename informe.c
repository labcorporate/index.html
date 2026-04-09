<h2 class="sr-only">Estado de los 54 participantes esperados: 37 completaron, 8 no cursaron, 7 en curso o incompleto, 2 con bajo rendimiento</h2>

<div style="display:grid;grid-template-columns:repeat(4,minmax(0,1fr));gap:10px;margin-bottom:1.5rem;">
  <div style="background:var(--color-background-secondary);border-radius:var(--border-radius-md);padding:1rem;text-align:center;">
    <div style="font-size:12px;color:var(--color-text-secondary);margin-bottom:4px;">Completaron</div>
    <div style="font-size:28px;font-weight:500;color:#0F6E56;">37</div>
    <div style="font-size:11px;color:var(--color-text-secondary);">69%</div>
  </div>
  <div style="background:var(--color-background-secondary);border-radius:var(--border-radius-md);padding:1rem;text-align:center;">
    <div style="font-size:12px;color:var(--color-text-secondary);margin-bottom:4px;">No cursaron</div>
    <div style="font-size:28px;font-weight:500;color:#A32D2D;">8</div>
    <div style="font-size:11px;color:var(--color-text-secondary);">15%</div>
  </div>
  <div style="background:var(--color-background-secondary);border-radius:var(--border-radius-md);padding:1rem;text-align:center;">
    <div style="font-size:12px;color:var(--color-text-secondary);margin-bottom:4px;">En curso / incompleto</div>
    <div style="font-size:28px;font-weight:500;color:#BA7517;">7</div>
    <div style="font-size:11px;color:var(--color-text-secondary);">13%</div>
  </div>
  <div style="background:var(--color-background-secondary);border-radius:var(--border-radius-md);padding:1rem;text-align:center;">
    <div style="font-size:12px;color:var(--color-text-secondary);margin-bottom:4px;">Bajo rendimiento</div>
    <div style="font-size:28px;font-weight:500;color:#E24B4A;">2</div>
    <div style="font-size:11px;color:var(--color-text-secondary);">&lt;70 de promedio</div>
  </div>
</div>

<div style="display:flex;gap:10px;flex-wrap:wrap;margin-bottom:12px;">
  <button onclick="filter('todos')" id="btn-todos" style="font-size:12px;padding:5px 12px;border-radius:20px;border:0.5px solid var(--color-border-secondary);background:var(--color-background-info);color:var(--color-text-info);cursor:pointer;">Todos (54)</button>
  <button onclick="filter('Completó')" id="btn-comp" style="font-size:12px;padding:5px 12px;border-radius:20px;border:0.5px solid #0F6E56;background:#E1F5EE;color:#085041;cursor:pointer;">Completaron (37)</button>
  <button onclick="filter('No cursó')" id="btn-no" style="font-size:12px;padding:5px 12px;border-radius:20px;border:0.5px solid #A32D2D;background:#FCEBEB;color:#501313;cursor:pointer;">No cursaron (8)</button>
  <button onclick="filter('En curso / incompleto')" id="btn-inc" style="font-size:12px;padding:5px 12px;border-radius:20px;border:0.5px solid #BA7517;background:#FAEEDA;color:#412402;cursor:pointer;">Incompleto (7)</button>
  <button onclick="filter('Bajo rendimiento')" id="btn-bajo" style="font-size:12px;padding:5px 12px;border-radius:20px;border:0.5px solid #A32D2D;background:#FAECE7;color:#4A1B0C;cursor:pointer;">Bajo rendimiento (2)</button>
</div>

<div style="border:0.5px solid var(--color-border-tertiary);border-radius:var(--border-radius-lg);overflow:hidden;">
  <table style="width:100%;border-collapse:collapse;font-size:13px;table-layout:fixed;">
    <thead>
      <tr style="background:var(--color-background-secondary);">
        <th style="padding:10px 12px;text-align:left;font-weight:500;color:var(--color-text-secondary);width:40%;">Nombre</th>
        <th style="padding:10px 12px;text-align:left;font-weight:500;color:var(--color-text-secondary);width:35%;">Email</th>
        <th style="padding:10px 12px;text-align:center;font-weight:500;color:var(--color-text-secondary);width:12%;">Promedio</th>
        <th style="padding:10px 12px;text-align:center;font-weight:500;color:var(--color-text-secondary);width:13%;">Estado</th>
      </tr>
    </thead>
    <tbody id="tableBody"></tbody>
  </table>
</div>

<script>
const data = [
  ["Alexis Cuartas","alexis.cuartas@adenuniversity.edu.pa",100,"En curso / incompleto"],
  ["PAOLA PINILLA","andrea.pinilla@adenuniversity.edu.pa",null,"En curso / incompleto"],
  ["Jhonatan Betancourt","jhonatan.betancourt@adenuniversity.edu.pa",null,"No cursó"],
  ["Daniel Villada","daniel.villada@adenuniversity.edu.pa",95,"Completó"],
  ["Edwin Ortiz","edwin.ortiz@adenuniversity.edu.pa",null,"No cursó"],
  ["Liliana Mercado","liliana.mercado@adenuniversity.edu.pa",null,"No cursó"],
  ["Jensy Mena","jensy.mena@adenuniversity.edu.pa",100,"Completó"],
  ["Ana Taborda","ana.taborda@adenuniversity.edu.pa",97.5,"Completó"],
  ["Alejandro Arroyave","alejandro.arroyave@adenuniversity.edu.pa",97.5,"Completó"],
  ["Luis Eduardo Florez Ricardo","luis.florez@adenuniversity.edu.pa",85.75,"Completó"],
  ["Arielys Zuniga","arielys.zuniga@adenuniversity.edu.pa",98,"En curso / incompleto"],
  ["Johayni Ortega","johayni.ortega@adenuniversity.edu.pa",96.25,"Completó"],
  ["Raul Lopez","raul.lopez@adenuniversity.edu.pa",96.25,"Completó"],
  ["Valeria Santander","valeria.santander@adenuniversity.edu.pa",97.5,"Completó"],
  ["Juan Lopez","juan.lopez@adenuniversity.edu.pa",91.5,"En curso / incompleto"],
  ["Isabel Cristina Mora Nieto","isabel.mora@adenuniversity.edu.pa",null,"No cursó"],
  ["Maria Alejandra López Aguiar","mariaalejandra.lopez@adenuniversity.edu.pa",97.5,"Completó"],
  ["Edwin Daniel Sosa Correa","edwindaniel.sosa@adenuniversity.edu.pa",78.75,"Completó"],
  ["Mayerli Andrea Espinosa López","mayerli.espinosa@adenuniversity.edu.pa",85.5,"Completó"],
  ["Julián Felipe Jaramillo Alvarez","julian.jaramillo@adenuniversity.edu.pa",100,"Completó"],
  ["Luisa Fernanda Luna Herrera","luisafernanda.herrera@adenuniversity.edu.pa",95.25,"Completó"],
  ["Juan Carlos David Cely Suarez","juancarlos.cely@adenuniversity.edu.pa",75,"Completó"],
  ["Elkin Alejandro Ossa Rueda","alejandro.ossa@adenuniversity.edu.pa",96.25,"Completó"],
  ["Yessica Mercedes Torres Muñoz","yessica.torres@adenuniversity.edu.pa",95.25,"Completó"],
  ["Jeremy Alexander Mojica Page","jeremy.mojica@adenuniversity.edu.pa",98,"Completó"],
  ["Gisella del Carmen Valarezco Estrada","gissella.valarezo@adenuniversity.edu.pa",86.25,"Completó"],
  ["Laura Vanessa Toro Quiceno","laura.toro@adenuniversity.edu.pa",82.5,"En curso / incompleto"],
  ["José Mario Pedrozo Vasquez","jose.pedrozo@adenuniversity.edu.pa",95,"En curso / incompleto"],
  ["Claudia Patricia Alzate Machado","claudia.alzate@adenuniversity.edu.pa",97.5,"Completó"],
  ["Lisseth Cristina Gomez Cardona","lisseth.gomez@adenuniversity.edu.pa",85.5,"Completó"],
  ["Mariana Muñoz","mariana.munoz@adenuniversity.edu.pa",97.5,"Completó"],
  ["Noris Elena Franco Dominguez","noris.franco@adenuniversity.edu.pa",97.5,"Completó"],
  ["Valentina Arroyave Cadavid","valentina.arroyave@adenuniversity.edu.pa",100,"Completó"],
  ["Erika Andrea Florez Gonzalez","erika.florez@adenuniversity.edu.pa",100,"Completó"],
  ["Julian Villa Ospina","julian.villa@adenuniversity.edu.pa",82.5,"Completó"],
  ["Sor Milena Arboleda Cardona","milena.arboleda@adenuniversity.edu.pa",78.75,"Completó"],
  ["Viviana Vanessa Córdoba Meneses","viviana.cordoba@adenuniversity.edu.pa",null,"No cursó"],
  ["Merichel Argelis Avila Santos","merichel.avila@adenuniversity.edu.pa",null,"En curso / incompleto"],
  ["Tira Linn Mejía Bellasteros","tira.mejia@adenuniversity.edu.pa",85,"Completó"],
  ["Arbey Alexander Restrepo Patiño","alexander.restrepo@adenuniversity.edu.pa",95.25,"Completó"],
  ["Mario Javier Palacio Bentancur","mario.palacio@adenuniversity.edu.pa",95.25,"Completó"],
  ["Andrés Felipe Alzate Meneses","andres.alzate@adenuniversity.edu.pa",null,"No cursó"],
  ["Carolina Mejía Higinio","carolina.mejia@adenuniversity.edu.pa",97.5,"Completó"],
  ["Carol Esteffan Jurado Serna","carol.jurado@adenuniversity.edu.pa",89,"Completó"],
  ["Johan sneider Quintana López","johan.quintana@adenuniversity.edu.pa",95.25,"Completó"],
  ["Juan Camilo Tabares Mesa","juan.tabares@adenuniversity.edu.pa",85,"Completó"],
  ["Daniela Ospina Bedoya","daniela.ospina@adenuniversity.edu.pa",100,"Completó"],
  ["Juan Esteban Otalvaro Arenas","juan.otalvaro@adenuniversity.edu.pa",null,"No cursó"],
  ["Sebastian Durango","sebastian.durango@adenuniversity.edu.pa",95.25,"Completó"],
  ["Luisa Uribe","luisafernanda.uribe@adenuniversity.edu.pa",96.25,"Completó"],
  ["Jeison Cordero","jeison.cordero@adenuniversity.edu.pa",65.75,"Bajo rendimiento"],
  ["Veronica Julieth Tejada Vera","veronica.tejada@adenuniversity.edu.pa",97.5,"Completó"],
  ["Kimbery Martinez","kimberly.martinez@adenuniversity.edu.pa",null,"No cursó"],
  ["Jennifer Mosquera","jennifer.mosquera@adenuniversity.edu.pa",66.25,"Bajo rendimiento"],
];

const badges = {
  "Completó": {bg:"#E1F5EE",color:"#085041",border:"#9FE1CB"},
  "No cursó": {bg:"#FCEBEB",color:"#501313",border:"#F7C1C1"},
  "En curso / incompleto": {bg:"#FAEEDA",color:"#412402",border:"#FAC775"},
  "Bajo rendimiento": {bg:"#FAECE7",color:"#4A1B0C",border:"#F5C4B3"},
};

let current = 'todos';

function filter(f) {
  current = f;
  render();
}

function render() {
  const body = document.getElementById('tableBody');
  const filtered = current === 'todos' ? data : data.filter(r => r[3] === current);
  body.innerHTML = filtered.map((r,i) => {
    const b = badges[r[3]];
    const prom = r[2] !== null ? r[2].toFixed(1) : '—';
    const promColor = r[2] === null ? 'var(--color-text-secondary)' : r[2] >= 90 ? '#0F6E56' : r[2] >= 70 ? 'var(--color-text-primary)' : '#A32D2D';
    return `<tr style="border-top:0.5px solid var(--color-border-tertiary);">
      <td style="padding:9px 12px;color:var(--color-text-primary);overflow:hidden;text-overflow:ellipsis;white-space:nowrap;">${r[0]}</td>
      <td style="padding:9px 12px;color:var(--color-text-secondary);font-size:12px;overflow:hidden;text-overflow:ellipsis;white-space:nowrap;">${r[1]}</td>
      <td style="padding:9px 12px;text-align:center;font-weight:500;color:${promColor};">${prom}</td>
      <td style="padding:9px 8px;text-align:center;">
        <span style="font-size:11px;padding:3px 8px;border-radius:10px;background:${b.bg};color:${b.color};border:0.5px solid ${b.border};white-space:nowrap;">${r[3]}</span>
      </td>
    </tr>`;
  }).join('');
}

render();
</script>
